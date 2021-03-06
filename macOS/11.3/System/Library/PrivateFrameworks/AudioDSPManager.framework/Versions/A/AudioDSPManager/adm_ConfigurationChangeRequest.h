/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioDSPManager.framework/Versions/A/AudioDSPManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioDSPManager/AudioDSPManager-Structs.h>
#import <libobjc.A.dylib/adm_JSONSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/dspd_ConfigurationChangeRequest.h>

@class NSString;

@interface adm_ConfigurationChangeRequest : NSObject <adm_JSONSerializable, NSSecureCoding, dspd_ConfigurationChangeRequest> {

	unsigned session;

}

@property (assign,nonatomic) unsigned session; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)session;
-(void)setSession:(unsigned)arg1 ;
-(id)initWithSession:(unsigned)arg1 ;
-(basic_json<std::map, std::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, bool, long long, unsigned long long, double, std::allocator, adl_serializer>*)adm_toJSON;
@end

