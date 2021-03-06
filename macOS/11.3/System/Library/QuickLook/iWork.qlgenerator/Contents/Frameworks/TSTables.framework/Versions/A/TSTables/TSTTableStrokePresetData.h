/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@class TSDStroke;

@interface TSTTableStrokePresetData : NSObject {

	TSDStroke* mHorizontalStroke;
	TSDStroke* mVerticalStroke;
	TSDStroke* mExteriorStroke;
	unsigned mVisibleMask;

}

@property (nonatomic,retain) TSDStroke * horizontalStroke; 
@property (nonatomic,retain) TSDStroke * verticalStroke; 
@property (nonatomic,retain) TSDStroke * exteriorStroke; 
@property (assign,nonatomic) unsigned mask; 
-(char)isEqual:(id)arg1 ;
-(id)init;
-(unsigned)mask;
-(void)setMask:(unsigned)arg1 ;
-(id)initWithArchive:(const StrokePresetDataArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithMask:(unsigned)arg1 horizontalStroke:(id)arg2 verticalStroke:(id)arg3 exteriorStroke:(id)arg4 ;
-(TSDStroke *)horizontalStroke;
-(TSDStroke *)verticalStroke;
-(TSDStroke *)exteriorStroke;
-(void)setHorizontalStroke:(TSDStroke *)arg1 ;
-(void)setVerticalStroke:(TSDStroke *)arg1 ;
-(void)setExteriorStroke:(TSDStroke *)arg1 ;
-(void)saveToArchive:(StrokePresetDataArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithDeprecatedArchive:(const Deprecated_StrokePresetDataArchive*)arg1 unarchiver:(id)arg2 ;
@end

