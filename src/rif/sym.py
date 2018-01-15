from rif.homog import *


tetrahedral_axes = {2: hnormalized([1, 0, 0]),
                    3: hnormalized([1, 1, 1]),
                    7: hnormalized([1, 1, -1])}  # other c3
octahedral_axes = {2: hnormalized([1, 1, 0]),
                   3: hnormalized([1, 1, 1]),
                   4: hnormalized([1, 0, 0])}
icosahedral_axes = {2: hnormalized([1, 0, 0]),
                    3: hnormalized([0.934172, 0.000000, 0.356822]),
                    5: hnormalized([0.850651, 0.525731, 0.000000])}


tetrahedral_frames = np.array([((+1.000000, +0.000000, +0.000000, +0.000000),
                                (+0.000000, -1.000000, +0.000000, +0.000000),
                                (+0.000000, -0.000000, -1.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.000000, +1.000000, -0.000000, +0.000000),
                                (-0.000000, +0.000000, +1.000000, +0.000000),
                                (+1.000000, -0.000000, +0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+1.000000, +0.000000, +0.000000, +0.000000),
                                (+0.000000, +1.000000, -0.000000, +0.000000),
                                (+0.000000, +0.000000, +1.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.000000, -1.000000, +0.000000, +0.000000),
                                (-0.000000, -0.000000, -1.000000, +0.000000),
                                (+1.000000, +0.000000, -0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.000000, +1.000000, -0.000000, +0.000000),
                                (+0.000000, -0.000000, -1.000000, +0.000000),
                                (-1.000000, +0.000000, -0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.000000, +0.000000, +1.000000, +0.000000),
                                (+1.000000, -0.000000, +0.000000, +0.000000),
                                (+0.000000, +1.000000, -0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.000000, -1.000000, +0.000000, +0.000000),
                                (+0.000000, +0.000000, +1.000000, +0.000000),
                                (-1.000000, -0.000000, +0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.000000, -0.000000, -1.000000, +0.000000),
                                (+1.000000, +0.000000, -0.000000, +0.000000),
                                (+0.000000, -1.000000, +0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.000000, -0.000000, -1.000000, +0.000000),
                                (-1.000000, -0.000000, -0.000000, +0.000000),
                                (-0.000000, +1.000000, -0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.000000, +0.000000, +1.000000, +0.000000),
                                (-1.000000, +0.000000, -0.000000, +0.000000),
                                (-0.000000, -1.000000, +0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-1.000000, -0.000000, -0.000000, +0.000000),
                                (-0.000000, +1.000000, +0.000000, +0.000000),
                                (+0.000000, +0.000000, -1.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-1.000000, +0.000000, -0.000000, +0.000000),
                                (-0.000000, -1.000000, +0.000000, +0.000000),
                                (-0.000000, +0.000000, +1.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000))])

octahedral_frames = np.array([((+0.000000, +1.000000, +0.000000, +0.000000),
                               (+1.000000, +0.000000, -0.000000, +0.000000),
                               (-0.000000, +0.000000, -1.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((+0.000000, -0.000000, +1.000000, +0.000000),
                               (+1.000000, +0.000000, -0.000000, +0.000000),
                               (-0.000000, +1.000000, +0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((+1.000000, +0.000000, -0.000000, +0.000000),
                               (+0.000000, +1.000000, +0.000000, +0.000000),
                               (+0.000000, -0.000000, +1.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((+1.000000, +0.000000, -0.000000, +0.000000),
                               (+0.000000, -0.000000, +1.000000, +0.000000),
                               (+0.000000, -1.000000, -0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((-0.000000, +0.000000, -1.000000, +0.000000),
                               (+0.000000, +1.000000, +0.000000, +0.000000),
                               (+1.000000, -0.000000, -0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((-0.000000, +1.000000, +0.000000, +0.000000),
                               (+0.000000, -0.000000, +1.000000, +0.000000),
                               (+1.000000, +0.000000, -0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((+0.000000, +1.000000, +0.000000, +0.000000),
                               (-0.000000, +0.000000, -1.000000, +0.000000),
                               (-1.000000, +0.000000, +0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((+0.000000, -0.000000, +1.000000, +0.000000),
                               (-0.000000, +1.000000, +0.000000, +0.000000),
                               (-1.000000, -0.000000, +0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((+0.000000, -1.000000, -0.000000, +0.000000),
                               (+1.000000, +0.000000, +0.000000, +0.000000),
                               (+0.000000, -0.000000, +1.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((+1.000000, -0.000000, -0.000000, +0.000000),
                               (-0.000000, +0.000000, -1.000000, +0.000000),
                               (+0.000000, +1.000000, +0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((+1.000000, +0.000000, +0.000000, +0.000000),
                               (+0.000000, -1.000000, -0.000000, +0.000000),
                               (-0.000000, +0.000000, -1.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((-0.000000, +0.000000, -1.000000, +0.000000),
                               (+1.000000, -0.000000, -0.000000, +0.000000),
                               (-0.000000, -1.000000, -0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((-1.000000, +0.000000, +0.000000, +0.000000),
                               (+0.000000, +1.000000, -0.000000, +0.000000),
                               (-0.000000, +0.000000, -1.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((-1.000000, -0.000000, +0.000000, +0.000000),
                               (+0.000000, +0.000000, +1.000000, +0.000000),
                               (-0.000000, +1.000000, +0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((+0.000000, -0.000000, +1.000000, +0.000000),
                               (+0.000000, -1.000000, -0.000000, +0.000000),
                               (+1.000000, +0.000000, +0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((+0.000000, +1.000000, -0.000000, +0.000000),
                               (-1.000000, +0.000000, +0.000000, +0.000000),
                               (+0.000000, -0.000000, +1.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((+0.000000, +0.000000, +1.000000, +0.000000),
                               (-1.000000, -0.000000, +0.000000, +0.000000),
                               (+0.000000, -1.000000, -0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((+0.000000, -1.000000, -0.000000, +0.000000),
                               (-0.000000, -0.000000, +1.000000, +0.000000),
                               (-1.000000, -0.000000, -0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((-0.000000, -1.000000, -0.000000, +0.000000),
                               (-0.000000, +0.000000, -1.000000, +0.000000),
                               (+1.000000, -0.000000, -0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((-0.000000, +0.000000, -1.000000, +0.000000),
                               (-1.000000, +0.000000, +0.000000, +0.000000),
                               (+0.000000, +1.000000, -0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((+0.000000, +0.000000, -1.000000, +0.000000),
                               (-0.000000, -1.000000, -0.000000, +0.000000),
                               (-1.000000, +0.000000, +0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((-1.000000, +0.000000, +0.000000, +0.000000),
                               (-0.000000, +0.000000, -1.000000, +0.000000),
                               (-0.000000, -1.000000, +0.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((-1.000000, -0.000000, -0.000000, +0.000000),
                               (+0.000000, -1.000000, -0.000000, +0.000000),
                               (-0.000000, -0.000000, +1.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000)),
                              ((+0.000000, -1.000000, -0.000000, +0.000000),
                               (-1.000000, -0.000000, -0.000000, +0.000000),
                               (+0.000000, +0.000000, -1.000000, +0.000000),
                               (+0.000000, +0.000000, +0.000000, +1.000000))])

icosahedral_frames = np.array([((+1.000000, +0.000000, +0.000000, +0.000000),
                                (+0.000000, +1.000000, +0.000000, +0.000000),
                                (+0.000000, -0.000000, +1.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.809017, +0.309017, +0.500000, +0.000000),
                                (+0.309017, +0.500000, -0.809017, +0.000000),
                                (-0.500000, +0.809017, +0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+1.000000, +0.000000, +0.000000, +0.000000),
                                (+0.000000, -1.000000, -0.000000, +0.000000),
                                (+0.000000, +0.000000, -1.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.809017, +0.309017, +0.500000, +0.000000),
                                (-0.309017, -0.500000, +0.809017, +0.000000),
                                (+0.500000, -0.809017, -0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.809017, +0.309017, -0.500000, +0.000000),
                                (+0.309017, +0.500000, +0.809017, +0.000000),
                                (+0.500000, -0.809017, +0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.809017, +0.309017, -0.500000, +0.000000),
                                (-0.309017, -0.500000, -0.809017, +0.000000),
                                (-0.500000, +0.809017, -0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.809017, -0.309017, +0.500000, +0.000000),
                                (+0.309017, -0.500000, -0.809017, +0.000000),
                                (+0.500000, +0.809017, -0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.809017, -0.309017, +0.500000, +0.000000),
                                (-0.309017, +0.500000, +0.809017, +0.000000),
                                (-0.500000, -0.809017, +0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.809017, -0.309017, -0.500000, +0.000000),
                                (+0.309017, -0.500000, +0.809017, +0.000000),
                                (-0.500000, -0.809017, -0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.809017, -0.309017, -0.500000, +0.000000),
                                (-0.309017, +0.500000, -0.809017, +0.000000),
                                (+0.500000, +0.809017, +0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.500000, +0.809017, +0.309017, +0.000000),
                                (+0.809017, -0.309017, -0.500000, +0.000000),
                                (-0.309017, +0.500000, -0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.500000, +0.809017, +0.309017, +0.000000),
                                (-0.809017, +0.309017, +0.500000, +0.000000),
                                (+0.309017, -0.500000, +0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.500000, +0.809017, -0.309017, +0.000000),
                                (+0.809017, -0.309017, +0.500000, +0.000000),
                                (+0.309017, -0.500000, -0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.500000, +0.809017, -0.309017, +0.000000),
                                (-0.809017, +0.309017, -0.500000, +0.000000),
                                (-0.309017, +0.500000, +0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.500000, -0.809017, +0.309017, +0.000000),
                                (+0.809017, +0.309017, -0.500000, +0.000000),
                                (+0.309017, +0.500000, +0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.500000, -0.809017, +0.309017, +0.000000),
                                (-0.809017, -0.309017, +0.500000, +0.000000),
                                (-0.309017, -0.500000, -0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.500000, -0.809017, -0.309017, +0.000000),
                                (+0.809017, +0.309017, +0.500000, +0.000000),
                                (-0.309017, -0.500000, +0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.500000, -0.809017, -0.309017, +0.000000),
                                (-0.809017, -0.309017, -0.500000, +0.000000),
                                (+0.309017, +0.500000, -0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.309017, +0.500000, +0.809017, +0.000000),
                                (+0.500000, -0.809017, +0.309017, +0.000000),
                                (+0.809017, +0.309017, -0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.309017, +0.500000, +0.809017, +0.000000),
                                (-0.500000, +0.809017, -0.309017, +0.000000),
                                (-0.809017, -0.309017, +0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.309017, +0.500000, -0.809017, +0.000000),
                                (+0.500000, -0.809017, -0.309017, +0.000000),
                                (-0.809017, -0.309017, -0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.309017, +0.500000, -0.809017, +0.000000),
                                (-0.500000, +0.809017, +0.309017, +0.000000),
                                (+0.809017, +0.309017, +0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.309017, -0.500000, +0.809017, +0.000000),
                                (+0.500000, +0.809017, +0.309017, +0.000000),
                                (-0.809017, +0.309017, +0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.309017, -0.500000, +0.809017, +0.000000),
                                (-0.500000, -0.809017, -0.309017, +0.000000),
                                (+0.809017, -0.309017, -0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.309017, -0.500000, -0.809017, +0.000000),
                                (+0.500000, +0.809017, -0.309017, +0.000000),
                                (+0.809017, -0.309017, +0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.309017, -0.500000, -0.809017, +0.000000),
                                (-0.500000, -0.809017, +0.309017, +0.000000),
                                (-0.809017, +0.309017, -0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.000000, +1.000000, +0.000000, +0.000000),
                                (+0.000000, -0.000000, +1.000000, +0.000000),
                                (+1.000000, -0.000000, -0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.000000, +1.000000, +0.000000, +0.000000),
                                (-0.000000, +0.000000, -1.000000, +0.000000),
                                (-1.000000, +0.000000, +0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.000000, +0.000000, +1.000000, +0.000000),
                                (+1.000000, -0.000000, -0.000000, +0.000000),
                                (+0.000000, +1.000000, -0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.000000, +0.000000, +1.000000, +0.000000),
                                (-1.000000, +0.000000, +0.000000, +0.000000),
                                (-0.000000, -1.000000, +0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.000000, -1.000000, +0.000000, +0.000000),
                                (+0.000000, +0.000000, +1.000000, +0.000000),
                                (-1.000000, -0.000000, +0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.000000, -1.000000, +0.000000, +0.000000),
                                (-0.000000, -0.000000, -1.000000, +0.000000),
                                (+1.000000, +0.000000, -0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.000000, -0.000000, -1.000000, +0.000000),
                                (+1.000000, +0.000000, +0.000000, +0.000000),
                                (+0.000000, -1.000000, +0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((+0.000000, -0.000000, -1.000000, +0.000000),
                                (-1.000000, -0.000000, -0.000000, +0.000000),
                                (-0.000000, +1.000000, -0.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-1.000000, -0.000000, +0.000000, +0.000000),
                                (+0.000000, -1.000000, -0.000000, +0.000000),
                                (+0.000000, +0.000000, +1.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-1.000000, -0.000000, +0.000000, +0.000000),
                                (-0.000000, +1.000000, +0.000000, +0.000000),
                                (-0.000000, -0.000000, -1.000000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.809017, +0.309017, +0.500000, +0.000000),
                                (+0.309017, -0.500000, +0.809017, +0.000000),
                                (+0.500000, +0.809017, +0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.809017, +0.309017, +0.500000, +0.000000),
                                (-0.309017, +0.500000, -0.809017, +0.000000),
                                (-0.500000, -0.809017, -0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.809017, +0.309017, -0.500000, +0.000000),
                                (+0.309017, -0.500000, -0.809017, +0.000000),
                                (-0.500000, -0.809017, +0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.809017, +0.309017, -0.500000, +0.000000),
                                (-0.309017, +0.500000, +0.809017, +0.000000),
                                (+0.500000, +0.809017, -0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.809017, -0.309017, +0.500000, +0.000000),
                                (+0.309017, +0.500000, +0.809017, +0.000000),
                                (-0.500000, +0.809017, -0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.809017, -0.309017, +0.500000, +0.000000),
                                (-0.309017, -0.500000, -0.809017, +0.000000),
                                (+0.500000, -0.809017, +0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.809017, -0.309017, -0.500000, +0.000000),
                                (+0.309017, +0.500000, -0.809017, +0.000000),
                                (+0.500000, -0.809017, -0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.809017, -0.309017, -0.500000, +0.000000),
                                (-0.309017, -0.500000, +0.809017, +0.000000),
                                (-0.500000, +0.809017, +0.309017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.500000, +0.809017, +0.309017, +0.000000),
                                (+0.809017, +0.309017, +0.500000, +0.000000),
                                (+0.309017, +0.500000, -0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.500000, +0.809017, +0.309017, +0.000000),
                                (-0.809017, -0.309017, -0.500000, +0.000000),
                                (-0.309017, -0.500000, +0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.500000, +0.809017, -0.309017, +0.000000),
                                (+0.809017, +0.309017, -0.500000, +0.000000),
                                (-0.309017, -0.500000, -0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.500000, +0.809017, -0.309017, +0.000000),
                                (-0.809017, -0.309017, +0.500000, +0.000000),
                                (+0.309017, +0.500000, +0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.500000, -0.809017, +0.309017, +0.000000),
                                (+0.809017, -0.309017, +0.500000, +0.000000),
                                (-0.309017, +0.500000, +0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.500000, -0.809017, +0.309017, +0.000000),
                                (-0.809017, +0.309017, -0.500000, +0.000000),
                                (+0.309017, -0.500000, -0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.500000, -0.809017, -0.309017, +0.000000),
                                (+0.809017, -0.309017, -0.500000, +0.000000),
                                (+0.309017, -0.500000, +0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.500000, -0.809017, -0.309017, +0.000000),
                                (-0.809017, +0.309017, +0.500000, +0.000000),
                                (-0.309017, +0.500000, -0.809017, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.309017, +0.500000, +0.809017, +0.000000),
                                (+0.500000, +0.809017, -0.309017, +0.000000),
                                (-0.809017, +0.309017, -0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.309017, +0.500000, +0.809017, +0.000000),
                                (-0.500000, -0.809017, +0.309017, +0.000000),
                                (+0.809017, -0.309017, +0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.309017, +0.500000, -0.809017, +0.000000),
                                (+0.500000, +0.809017, +0.309017, +0.000000),
                                (+0.809017, -0.309017, -0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.309017, +0.500000, -0.809017, +0.000000),
                                (-0.500000, -0.809017, -0.309017, +0.000000),
                                (-0.809017, +0.309017, +0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.309017, -0.500000, +0.809017, +0.000000),
                                (+0.500000, -0.809017, -0.309017, +0.000000),
                                (+0.809017, +0.309017, +0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.309017, -0.500000, +0.809017, +0.000000),
                                (-0.500000, +0.809017, +0.309017, +0.000000),
                                (-0.809017, -0.309017, -0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.309017, -0.500000, -0.809017, +0.000000),
                                (+0.500000, -0.809017, +0.309017, +0.000000),
                                (-0.809017, -0.309017, +0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000)),
                               ((-0.309017, -0.500000, -0.809017, +0.000000),
                                (-0.500000, +0.809017, -0.309017, +0.000000),
                                (+0.809017, +0.309017, -0.500000, +0.000000),
                                (+0.000000, +0.000000, +0.000000, +1.000000))])
