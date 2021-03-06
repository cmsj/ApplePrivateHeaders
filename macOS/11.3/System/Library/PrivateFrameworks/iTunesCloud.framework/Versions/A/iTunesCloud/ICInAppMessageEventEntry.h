/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ICInAppMessageEventEntry : NSObject <NSCopying, NSSecureCoding> {

	NSString* _messageIdentifier;
	NSDictionary* _params;
	NSString* _eventIdentifier;

}

@property (nonatomic,readonly) NSString * messageIdentifier;              //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * params;                     //@synthesize params=_params - In the implementation block
@property (nonatomic,readonly) NSString * eventIdentifier;                //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)params;
-(NSString *)eventIdentifier;
-(NSString *)messageIdentifier;
-(id)initWithMessageIdentifier:(id)arg1 params:(id)arg2 ;
-(id)initWithMessageIdentifier:(id)arg1 params:(id)arg2 eventIdentifier:(id)arg3 ;
@end

