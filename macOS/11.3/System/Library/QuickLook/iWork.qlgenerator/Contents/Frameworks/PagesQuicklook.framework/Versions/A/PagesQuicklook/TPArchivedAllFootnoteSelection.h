/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPObject.h>
#import <libobjc.A.dylib/TSKArchivedSelection.h>

@class TPAllFootnoteSelection, NSString;

@interface TPArchivedAllFootnoteSelection : TSPObject <TSKArchivedSelection> {

	TPAllFootnoteSelection* _selection;

}

@property (nonatomic,retain) TPAllFootnoteSelection * selection;              //@synthesize selection=_selection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(TPAllFootnoteSelection *)selection;
-(void)setSelection:(TPAllFootnoteSelection *)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
@end
