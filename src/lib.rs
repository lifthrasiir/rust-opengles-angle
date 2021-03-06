// Copyright 2013 The Servo Project Developers. See the COPYRIGHT
// file at the top-level directory of this distribution.
//
// Licensed under the Apache License, Version 2.0 <LICENSE-APACHE or
// http://www.apache.org/licenses/LICENSE-2.0> or the MIT license
// <LICENSE-MIT or http://opensource.org/licenses/MIT>, at your
// option. This file may not be copied, modified, or distributed
// except according to those terms.

#![crate_name = "opengles"]
#![crate_type = "rlib"]

#![feature(macro_rules)]

extern crate libc;

pub mod gl2;

#[cfg(target_os="linux")]
pub mod glx;

#[cfg(target_os="macos")]
pub mod cgl;

#[cfg(target_os="windows")]
pub mod egl;

