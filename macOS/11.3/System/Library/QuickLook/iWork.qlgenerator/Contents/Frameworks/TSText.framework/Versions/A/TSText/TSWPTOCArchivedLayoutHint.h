/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPObject.h>
#import <TSText/TSDArchivedHint.h>

@class TSWPTOCLayoutHint, NSString;

@interface TSWPTOCArchivedLayoutHint : TSPObject <TSDArchivedHint> {

	TSWPTOCLayoutHint* _hint;

}

@property (nonatomic,retain) id<TSDHint> hint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHint:(id<TSDHint>)arg1 ;
-(id<TSDHint>)hint;
-(id)initWithContext:(id)arg1 hint:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
@end
