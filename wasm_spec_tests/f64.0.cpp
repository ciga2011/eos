#include <wasm_spec_tests.hpp>
BOOST_AUTO_TEST_SUITE(f64_0)

const string wasm_str = base_dir + "/wasm_spec_tests/wasms/f64.0.wasm";
std::vector<uint8_t> wasm = read_wasm(wasm_str.c_str());

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_0) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)0);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_1) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)1);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_2) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)2);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_3) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)3);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_4) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)4);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_5) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)5);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_6) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)6);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_7) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)7);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_8) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)8);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_9) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)9);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_10) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)10);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_11) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)11);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_12) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)12);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_13) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)13);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_14) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)14);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_15) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)15);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_16) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)16);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_17) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)17);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_18) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)18);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_19) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)19);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_20) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)20);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_21) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)21);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_22) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)22);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_23) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)23);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_CASE(f64_0_sub_apply_24) { try {
   TESTER tester;
   tester.produce_block();
   tester.create_account( N(wasmtest) );
   tester.produce_block();
   tester.set_code(N(wasmtest), wasm);
   tester.produce_block();

   action test;
   test.account = N(wasmtest);
   test.name = account_name((uint64_t)24);
   test.authorization = {{N(wasmtest), config::active_name}};

   push_action(tester, std::move(test), N(wasmtest).to_uint64_t());
   tester.produce_block();
   BOOST_REQUIRE_EQUAL( tester.validate(), true );
} FC_LOG_AND_RETHROW() }

BOOST_AUTO_TEST_SUITE_END()
