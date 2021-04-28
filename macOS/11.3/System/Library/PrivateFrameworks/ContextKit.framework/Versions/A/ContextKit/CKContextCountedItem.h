/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/Versions/A/ContextKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKContextCountedItem : NSObject <NSSecureCoding> {

	id _item;
	unsigned long long _count;

}

@property (nonatomic,retain) id item;                               //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(char)supportsSecureCoding;
+(id)item:(id)arg1 withCount:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setItem:(id)arg1 ;
-(id)item;
-(void)setCount:(unsigned long long)arg1 ;
@end
