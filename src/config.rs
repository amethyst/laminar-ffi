use laminar::NetworkConfig;

/// Generates a default NetworkConfig to be used via FFI
#[no_mangle]
pub extern fn get_laminar_config() -> *mut i32 {
    let config = Box::new(NetworkConfig::default());
    let config: *mut NetworkConfig = Box::into_raw(config);
    config as *mut i32
}


/// Frees an allocated config struct
#[no_mangle]
pub unsafe extern fn free_laminar_config(ptr: *mut i32) {
    if ptr.is_null() {
        return;
    }
    Box::from_raw(ptr);
}