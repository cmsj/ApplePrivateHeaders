/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class AFPeerInfo, AFAudioSessionCoordinationSystemInfo, NSString;

@interface AFAudioSessionCoordinationDeviceInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	AFPeerInfo* _peerInfo;
	AFAudioSessionCoordinationSystemInfo* _systemInfo;

}

@property (nonatomic,copy,readonly) AFPeerInfo * peerInfo;                                          //@synthesize peerInfo=_peerInfo - In the implementation block
@property (nonatomic,copy,readonly) AFAudioSessionCoordinationSystemInfo * systemInfo;              //@synthesize systemInfo=_systemInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(AFPeerInfo *)peerInfo;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)buildDictionaryRepresentation;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(AFAudioSessionCoordinationSystemInfo *)systemInfo;
-(id)initWithPeerInfo:(id)arg1 systemInfo:(id)arg2 ;
@end

