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

@class NSString, AFPeerInfo, AFEndpointInfo, AFInstanceInfo, AFSpeechInfo, AFRequestHandlingContext, NSArray, NSDictionary;

@interface AFCommandExecutionInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	NSString* _executionID;
	NSString* _requestID;
	AFPeerInfo* _originPeerInfo;
	AFEndpointInfo* _endpointInfo;
	AFInstanceInfo* _instanceInfo;
	AFSpeechInfo* _speechInfo;
	AFRequestHandlingContext* _requestHandlingContextSnapshot;
	NSArray* _deviceRestrictions;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSString * executionID;                                                 //@synthesize executionID=_executionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestID;                                                   //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy,readonly) AFPeerInfo * originPeerInfo;                                            //@synthesize originPeerInfo=_originPeerInfo - In the implementation block
@property (nonatomic,copy,readonly) AFEndpointInfo * endpointInfo;                                          //@synthesize endpointInfo=_endpointInfo - In the implementation block
@property (nonatomic,copy,readonly) AFInstanceInfo * instanceInfo;                                          //@synthesize instanceInfo=_instanceInfo - In the implementation block
@property (nonatomic,copy,readonly) AFSpeechInfo * speechInfo;                                              //@synthesize speechInfo=_speechInfo - In the implementation block
@property (nonatomic,copy,readonly) AFRequestHandlingContext * requestHandlingContextSnapshot;              //@synthesize requestHandlingContextSnapshot=_requestHandlingContextSnapshot - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deviceRestrictions;                                           //@synthesize deviceRestrictions=_deviceRestrictions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                                                //@synthesize userInfo=_userInfo - In the implementation block
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
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)requestID;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)buildDictionaryRepresentation;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSString *)executionID;
-(AFPeerInfo *)originPeerInfo;
-(AFEndpointInfo *)endpointInfo;
-(AFInstanceInfo *)instanceInfo;
-(AFSpeechInfo *)speechInfo;
-(AFRequestHandlingContext *)requestHandlingContextSnapshot;
-(NSArray *)deviceRestrictions;
-(id)initWithExecutionID:(id)arg1 requestID:(id)arg2 originPeerInfo:(id)arg3 endpointInfo:(id)arg4 instanceInfo:(id)arg5 speechInfo:(id)arg6 requestHandlingContextSnapshot:(id)arg7 deviceRestrictions:(id)arg8 userInfo:(id)arg9 ;
@end

