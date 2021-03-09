#include "doctest.h"
#include "snowman.hpp"
#include <string>
#include <stdexcept>
using namespace ariel;
TEST_CASE("invalid input"){
 CHECK_THROWS(snowman(-1));
 CHECK_THROWS(snowman(11114511));
 CHECK_THROWS(snowman(111141111));
 CHECK_THROWS(snowman(01114111));
 CHECK_THROWS(snowman(22114111));
 CHECK_THROWS(snowman(55114111));
}
TEST_CASE("Snowman test"){
    CHECK(snowman (11114411) =="112");
    CHECK( snowman(11111111) ==string(" _===_  (.,.)<( : )> ( : ) "));

    CHECK(snowman(31112214) == string(" _  /_\\ (.,.) ]( : )[  (   )"));
     CHECK (snowman(44224444) == string ("  ___  (_*_) (o o)  (   )(   )"));
     CHECK ( snowman(41332222) ==string ( "  ___  (_*_) (O,O) \\(] [)/ (" " ) ")) ;

    CHECK ( snowman(22331122) == string ("   ___   .....   (O.O) <(] [)>  (" " ) ")) ;

     CHECK ( snowman(21231212) == string ( "  ___   .....   (o,O) <( : )/  (" ") ") );

      CHECK ( snowman(12121212) == string ( " _===_ (o..) <( : )/  (" ") ") );

     CHECK( snowman(21323211) == string ( "  ___   ..... (O.o)/( : )/( : )"));

      CHECK ( snowman(33221122) == string ( "  _    /_\\   (o_o)  <(] [)>   (" ")     ") );
       CHECK ( snowman(34421122) == string (" _     /_\\ (- o) <(] [)>  (" ")   ") );
       CHECK ( snowman(44441124) == string ( " ___  (_*_) (- -) <(] [)>  (  ) ")) ;
         CHECK ( snowman(44444444) == string ( " ___   (_*_) (- -)  (  )  (  )    ")) ;
         CHECK ( snowman(44444444) == string (" ___   (_*_) (- -) (  ) (  ) ")) ;
        CHECK (snowman(22224444) == string ( "___     .....  (o.o)   (  )   (  )  "));

        CHECK (snowman(22221144) ==string ( " ___ ..... (o.o) <(  )> (  )  "));
          CHECK ( snowman(22221122) == string (" ___ ..... (o.o)  <(] [)>   (" ")  "));
          CHECK ( snowman(22221133) == string (" ___   .....   (o.o)   <(> <)>   (___)    ")) ;
          CHECK (snowman(11221133) == string ("_===_  (o,o) <(> <)>(___)  ") );
         CHECK ( snowman(11111133) == string ("_===_  (.,.) <(> <)> (___)   "));
         CHECK ( snowman(11441133) ==string ( "_===_ (-,-)<(> <)>(___)  "));
}