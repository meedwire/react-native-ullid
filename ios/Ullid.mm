#import "Ullid.h"

@implementation Ullid
RCT_EXPORT_MODULE()

- (NSString *)ULLID {
    std::string result = ullid::generateULLID();
    
    NSString *ullidString = [NSString stringWithUTF8String:result.c_str()];

    return ullidString;
}

- (std::shared_ptr<facebook::react::TurboModule>)getTurboModule:
    (const facebook::react::ObjCTurboModule::InitParams &)params
{
    return std::make_shared<facebook::react::NativeUllidSpecJSI>(params);
}

@end
