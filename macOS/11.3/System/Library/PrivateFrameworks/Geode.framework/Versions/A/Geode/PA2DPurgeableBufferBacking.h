/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PA2DPurgeableBufferBacking <PA2DBufferBacking>
@required
-(void)setPurgeLevel:(int)arg1 forROI:(PFIntRect_st)arg2;
-(void)endAccess:(PFIntRect_st)arg1;
-(void)beginAccess:(PFIntRect_st)arg1 refillProcessor:(/*^block*/id)arg2;
-(void)beginAccess:(PFIntRect_st)arg1 emptyProcessor:(/*^block*/id)arg2;

@end

