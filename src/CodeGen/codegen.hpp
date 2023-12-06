#pragma once

#include <cassert>
#include <cstring>

#include "../IR/koopa.h"

void CodeGen(const koopa_raw_program_t& program);

void Handle(const koopa_raw_global_alloc_t& global, const koopa_raw_value_t& value);
void Handle(const koopa_raw_load_t& load, const koopa_raw_value_t& value);
void Handle(const koopa_raw_store_t& store);

void Handle(const koopa_raw_integer_t& integer);
void Handle(const koopa_raw_binary_t& binary, const koopa_raw_value_t& value);

void Handle(const koopa_raw_branch_t& branch);
void Handle(const koopa_raw_jump_t& jump);
void Handle(const koopa_raw_call_t& call, const koopa_raw_value_t& value);
void Handle(const koopa_raw_return_t& ret);

void Handle(const koopa_raw_program_t& program);
void Handle(const koopa_raw_slice_t& slice);
void Handle(const koopa_raw_function_t& func);
void Handle(const koopa_raw_basic_block_t& bb);
void Handle(const koopa_raw_value_t& value);