#include "rosetta/atype_map.hpp"

#include <iostream>
#include <map>

namespace rif {
namespace rosetta {

std::map<std::pair<std::string, std::string>, int> rosetta_atype_map;

int rosetta_atom_type(std::string const &resname, std::string const &atomname) {
  // std::cout << "rosetta_atom_type " <<  << std::endl;
  std::map<std::pair<std::string, std::string>, int>::const_iterator i =
      rosetta_atype_map.find(std::make_pair(resname, atomname));
  if (i != rosetta_atype_map.end()) return std::min(25, i->second);
  return -1;
}

void init() {
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ALA"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ALA"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ALA"), std::string("CB")), (int)5));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ALA"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ALA"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ALA"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ALA"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ALA"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ALA"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ALA"), std::string("3HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("CD")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("CG")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("CZ")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("HE")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("NE")), (int)11));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("NH1")), (int)11));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("NH2")), (int)11));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("1HD")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("1HG")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("1HH1")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("1HH2")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("2HD")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("2HG")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("2HH1")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ARG"), std::string("2HH2")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASN"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASN"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASN"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASN"), std::string("CG")), (int)1));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASN"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASN"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASN"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASN"), std::string("ND2")), (int)9));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASN"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASN"), std::string("OD1")), (int)14));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASN"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASN"), std::string("1HD2")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASN"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASN"), std::string("2HD2")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASP"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASP"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASP"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASP"), std::string("CG")), (int)2));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASP"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASP"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASP"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASP"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASP"), std::string("OD1")), (int)15));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASP"), std::string("OD2")), (int)15));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASP"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ASP"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("CYS"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("CYS"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("CYS"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("CYS"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("CYS"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("CYS"), std::string("HG")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("CYS"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("CYS"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("CYS"), std::string("SG")), (int)17));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("CYS"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("CYS"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("CD")), (int)1));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("CG")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("NE2")), (int)9));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("OE1")), (int)14));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("1HE2")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("1HG")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("2HE2")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLN"), std::string("2HG")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("CD")), (int)2));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("CG")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("OE1")), (int)15));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("OE2")), (int)15));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("1HG")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLU"), std::string("2HG")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLY"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLY"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLY"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLY"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLY"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLY"), std::string("1HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("GLY"), std::string("2HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("CD2")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("CE1")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("CG")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("HD2")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("HE1")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("HE2")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("ND1")), (int)8));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("NE2")), (int)7));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("HIS"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("CB")), (int)3));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("CD1")), (int)5));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("CG1")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("CG2")), (int)5));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("1HD1")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("1HG1")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("1HG2")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("2HD1")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("2HG1")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("2HG2")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("3HD1")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("ILE"), std::string("3HG2")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("CD1")), (int)5));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("CD2")), (int)5));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("CG")), (int)3));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("HG")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("1HD1")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("1HD2")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("2HD1")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("2HD2")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("3HD1")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LEU"), std::string("3HD2")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("CD")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("CE")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("CG")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("NZ")), (int)10));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("1HD")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("1HE")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("1HG")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("1HZ")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("2HD")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("2HE")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("2HG")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("2HZ")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("LYS"), std::string("3HZ")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("CE")), (int)5));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("CG")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("SD")), (int)17));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("1HE")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("1HG")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("2HE")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("2HG")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("MET"), std::string("3HE")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("CD1")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("CD2")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("CE1")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("CE2")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("CG")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("CZ")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("HD1")), (int)26));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("HD2")), (int)26));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("HE1")), (int)26));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("HE2")), (int)26));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("HZ")), (int)26));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PHE"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("CD")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("CG")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("N")), (int)12));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("NV")), (int)57));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("1HD")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("1HG")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("2HD")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("PRO"), std::string("2HG")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("SER"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("SER"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("SER"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("SER"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("SER"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("SER"), std::string("HG")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("SER"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("SER"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("SER"), std::string("OG")), (int)13));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("SER"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("SER"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("THR"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("THR"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("THR"), std::string("CB")), (int)3));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("THR"), std::string("CG2")), (int)5));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("THR"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("THR"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("THR"), std::string("HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("THR"), std::string("HG1")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("THR"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("THR"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("THR"), std::string("OG1")), (int)13));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("THR"), std::string("1HG2")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("THR"), std::string("2HG2")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("THR"), std::string("3HG2")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("CD1")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("CD2")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("CE2")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("CE3")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("CG")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("CH2")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("CZ2")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("CZ3")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("HD1")), (int)26));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("HE1")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("HE3")), (int)26));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("HH2")), (int)26));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("HZ2")), (int)26));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("HZ3")), (int)26));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("NE1")), (int)7));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TRP"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("CB")), (int)4));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("CD1")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("CD2")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("CE1")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("CE2")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("CG")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("CZ")), (int)6));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("HD1")), (int)26));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("HD2")), (int)26));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("HE1")), (int)26));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("HE2")), (int)26));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("HH")), (int)24));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("OH")), (int)13));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("1HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("TYR"), std::string("2HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("C")), (int)20));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("CA")), (int)19));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("CB")), (int)3));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("CG1")), (int)5));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("CG2")), (int)5));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("H")), (int)27));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("HA")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("HB")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("N")), (int)18));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("O")), (int)21));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("1HG1")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("1HG2")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("2HG1")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("2HG2")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("3HG1")), (int)25));
  rosetta_atype_map.insert(std::make_pair(
      std::make_pair(std::string("VAL"), std::string("3HG2")), (int)25));
}

struct INIT {
  INIT() { init(); }
};
INIT do_init;
}
}
