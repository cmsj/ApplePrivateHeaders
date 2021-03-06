/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/MCObject.h>

@class MCPlug;

@interface MCPlugProxy : MCObject {

	MCPlug* _plug;

}

@property (retain) MCPlug * plug;              //@synthesize plug=_plug - In the implementation block
-(void)dealloc;
-(char)isKindOfClass:(Class)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setContainer:(id)arg1 ;
-(long long)zIndex;
-(MCPlug *)plug;
-(void)setPlug:(MCPlug *)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)setSuperContainer:(id)arg1 ;
@end

