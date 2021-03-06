/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PurgeableItem.h>

@class NSURL, NSString;

@interface PurgeableDirectory : NSObject <PurgeableItem> {

	unsigned long long purgeOrder;
	NSURL* _itemURL;

}

@property (nonatomic,retain) NSURL * itemURL;                            //@synthesize itemURL=_itemURL - In the implementation block
@property (assign,nonatomic) unsigned long long purgeOrder; 
@property (nonatomic,readonly) unsigned long long size; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)size;
-(NSURL *)itemURL;
-(void)setItemURL:(NSURL *)arg1 ;
-(void)setPurgeOrder:(unsigned long long)arg1 ;
-(char)purgeAndGetSize:(unsigned long long*)arg1 ;
-(unsigned long long)purgeOrder;
-(id)initWithURL:(id)arg1 purgeOrder:(unsigned long long)arg2 ;
@end

