import numpy as np

from rif.dtypes import rif_ops
from rif.eigen_types import v3f_t
from rif.actor import Atom


def test_atom_dtype():
    a = np.zeros(10, dtype=Atom).view(np.recarray)
    assert a.shape == (10,)
    assert a.pos['raw'].shape == (10, 3)
    assert a.atype.shape == (10,)
    assert a.rtype.shape == (10,)
    assert a.anum.shape == (10,)
    a.pos['raw'] = np.random.randn(10, 3)


def test_atom_math():
    v = np.ones(2, dtype=v3f_t)
    a = np.zeros(2, dtype=Atom)
    a['atype'] = [3, 4]
    a['rtype'] = [12, 6]
    a['anum'] = [1, 2]
    print('v', v)
    print('a', a)
    with rif_ops():
        assert np.all(1 == (a + v)['pos']['raw'])
        assert np.all(3 == (v + a + v + v)['pos']['raw'])
        assert np.all(-1 == (a - v)['pos']['raw'])
        assert np.all(3 == (3 * v - a + v - v)['pos']['raw'])
