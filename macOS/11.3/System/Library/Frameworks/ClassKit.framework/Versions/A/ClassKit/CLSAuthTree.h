/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ClassKit.framework/Versions/A/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSNumber;

@interface CLSAuthTree : NSObject <NSSecureCoding> {

	NSMutableDictionary* _graph;
	NSNumber* _overridingStatus;

}
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)authStatusFor:(id)arg1 ;
-(void)_addNode:(id)arg1 parentStatusID:(id)arg2 ;
-(id)initWithOverridingStatus:(long long)arg1 ;
-(id)initWithStatus:(long long)arg1 statusID:(id)arg2 identifier:(id)arg3 ;
-(void)setAuthStatus:(long long)arg1 forIdentifier:(id)arg2 statusID:(id)arg3 parentStatusID:(id)arg4 ;
-(long long)authStatusAtIdentifierPath:(id)arg1 ;
@end

