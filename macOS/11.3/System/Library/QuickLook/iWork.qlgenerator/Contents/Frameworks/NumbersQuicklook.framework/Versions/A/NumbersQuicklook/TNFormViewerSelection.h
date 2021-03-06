/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/NumbersQuicklook.framework/Versions/A/NumbersQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NumbersQuicklook/NumbersQuicklook-Structs.h>
#import <TSKit/TSKSelection.h>

@interface TNFormViewerSelection : TSKSelection {

	unsigned short _fieldIndex;
	unsigned _recordIndex;

}

@property (nonatomic,readonly) unsigned recordIndex;                   //@synthesize recordIndex=_recordIndex - In the implementation block
@property (nonatomic,readonly) unsigned short fieldIndex;              //@synthesize fieldIndex=_fieldIndex - In the implementation block
+(id)selection;
+(Class)archivedSelectionClass;
+(id)selectionForRecordIndex:(unsigned)arg1 fieldIndex:(unsigned short)arg2 ;
+(id)selectionForRecordIndex:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)initWithRecordIndex:(unsigned)arg1 fieldIndex:(unsigned short)arg2 ;
-(unsigned)recordIndex;
-(unsigned short)fieldIndex;
@end

