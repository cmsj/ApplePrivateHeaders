/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/Versions/A/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface PTOutlet : NSObject <NSSecureCoding> {

	unsigned long long _nextToken;
	NSMutableDictionary* _actionsByToken;

}
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)_invokeActions;
-(id)addAction:(/*^block*/id)arg1 ;
-(void)removeActionForToken:(id)arg1 ;
@end

