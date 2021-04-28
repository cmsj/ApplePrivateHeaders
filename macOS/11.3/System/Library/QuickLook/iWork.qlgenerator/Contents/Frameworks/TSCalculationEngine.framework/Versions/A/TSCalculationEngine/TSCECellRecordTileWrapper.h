/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <TSPersistence/TSPObject.h>

@interface TSCECellRecordTileWrapper : TSPObject {

	unsigned short _internalOwnerID;
	unsigned short _tileColumnBegin;
	unsigned _tileRowBegin;
	TSCECellRecordTile* _tile;
	TSCECellRecordList* _unarchivedCellRecords;

}

@property (nonatomic,readonly) unsigned long long numCellRecords; 
@property (assign,nonatomic) unsigned short internalOwnerID;                   //@synthesize internalOwnerID=_internalOwnerID - In the implementation block
-(void)dealloc;
-(id)description;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(unsigned short)internalOwnerID;
-(id)initWithOwnerId:(unsigned short)arg1 tileColumnBegin:(unsigned short)arg2 tileRowBegin:(unsigned)arg3 context:(id)arg4 ;
-(TSCECellRecordTile*)cppTile;
-(unsigned long long)numCellRecords;
-(void)unpackAfterUnarchiveForCellDependencies:(TSCECellDependencies*)arg1 ;
-(void)setInternalOwnerID:(unsigned short)arg1 ;
@end
