/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPObject.h>
#import <TSTables/TSKArchivedSelection.h>

@class TSTTableControlCellSelection, TSKSelection, NSString;

@interface TSTTableArchivedControlCellSelection : TSPObject <TSKArchivedSelection> {

	TSTTableControlCellSelection* mControlCellSelection;

}

@property (nonatomic,retain) TSKSelection * selection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(TSKSelection *)selection;
-(void)setSelection:(TSKSelection *)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
@end
