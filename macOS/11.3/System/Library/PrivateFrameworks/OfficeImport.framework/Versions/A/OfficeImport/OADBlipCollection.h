/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface OADBlipCollection : NSObject {

	NSMutableArray* mBlips;

}

@property (nonatomic,retain) NSMutableArray * blips; 
-(id)init;
-(NSMutableArray *)blips;
-(id)blipAtIndex:(int)arg1 ;
-(unsigned)addBlip:(id)arg1 ;
-(unsigned)blipCount;
-(void)setBlips:(NSMutableArray *)arg1 ;
@end

