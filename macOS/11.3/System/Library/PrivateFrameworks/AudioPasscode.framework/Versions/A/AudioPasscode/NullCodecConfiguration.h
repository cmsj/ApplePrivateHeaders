/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/Versions/A/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioPasscode/AUPasscodeCodecConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NullCodecConfiguration : AUPasscodeCodecConfiguration <NSSecureCoding> {

	float _retrievalCallbackInterval;

}

@property (assign,nonatomic) float retrievalCallbackInterval;              //@synthesize retrievalCallbackInterval=_retrievalCallbackInterval - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDefaultValues;
-(id)commandLineOptions;
-(id)initWithCommandLineArgs:(id)arg1 ;
-(float)retrievalCallbackInterval;
-(void)setRetrievalCallbackInterval:(float)arg1 ;
@end

