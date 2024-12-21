#import "Ulid.h"

@implementation Ulid
RCT_EXPORT_MODULE()

- (NSString *)ULID {
    std::string result = ulid::generateULID();
    
    NSString *ulidString = [NSString stringWithUTF8String:result.c_str()];

    return ulidString;
}

- (std::shared_ptr<facebook::react::TurboModule>)getTurboModule:
    (const facebook::react::ObjCTurboModule::InitParams &)params
{
    return std::make_shared<facebook::react::NativeUlidSpecJSI>(params);
}

@end
