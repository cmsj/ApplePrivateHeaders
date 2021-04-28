/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SVXButtonEvent, SVXSystemEvent, SVXClientInfo, AFRequestInfo, NSDictionary;

@interface SVXActivationContext : NSObject <NSCopying, NSSecureCoding> {

	long long _source;
	unsigned long long _timestamp;
	SVXButtonEvent* _buttonEvent;
	SVXSystemEvent* _systemEvent;
	SVXClientInfo* _clientInfo;
	AFRequestInfo* _requestInfo;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) long long source;                               //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) SVXButtonEvent * buttonEvent;              //@synthesize buttonEvent=_buttonEvent - In the implementation block
@property (nonatomic,copy,readonly) SVXSystemEvent * systemEvent;              //@synthesize systemEvent=_systemEvent - In the implementation block
@property (nonatomic,copy,readonly) SVXClientInfo * clientInfo;                //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,copy,readonly) AFRequestInfo * requestInfo;               //@synthesize requestInfo=_requestInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)source;
-(unsigned long long)timestamp;
-(SVXClientInfo *)clientInfo;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(AFRequestInfo *)requestInfo;
-(SVXButtonEvent *)buttonEvent;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithSource:(long long)arg1 timestamp:(unsigned long long)arg2 buttonEvent:(id)arg3 systemEvent:(id)arg4 clientInfo:(id)arg5 requestInfo:(id)arg6 userInfo:(id)arg7 ;
-(SVXSystemEvent *)systemEvent;
@end
