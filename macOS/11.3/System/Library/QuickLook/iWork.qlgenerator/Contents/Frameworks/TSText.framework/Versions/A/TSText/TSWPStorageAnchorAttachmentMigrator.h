/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSText/TSText-Structs.h>
@class NSMutableArray;

@interface TSWPStorageAnchorAttachmentMigrator : NSObject {

	NSMutableArray* _charIndexPlacementIndexArray;

}

@property (nonatomic,retain) NSMutableArray * charIndexPlacementIndexArray;              //@synthesize charIndexPlacementIndexArray=_charIndexPlacementIndexArray - In the implementation block
-(NSMutableArray *)charIndexPlacementIndexArray;
-(void)setCharIndexPlacementIndexArray:(NSMutableArray *)arg1 ;
-(id)didCopyFromSourceWPStorage:(id)arg1 toTemporaryStorage:(id)arg2 copiedRange:(NSRange)arg3 ;
-(id)commandsForDidInsertIntoDestinationWPStorage:(id)arg1 insertionLocation:(unsigned long long)arg2 dolcContext:(id)arg3 ;
@end

