/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@class TSCECellTractRef, TSTTableInfo, TSTTableModel;

@interface TSTRangeRefPair : NSObject {

	TSCECellTractRef* _baseTractRef;
	TSCECellTractRef* _chromeTractRef;
	TSTTableInfo* _tableInfo;
	TSTTableModel* _tableModel;

}

@property (nonatomic,retain) TSCECellTractRef * baseTractRef;                          //@synthesize baseTractRef=_baseTractRef - In the implementation block
@property (nonatomic,retain) TSCECellTractRef * chromeTractRef;                        //@synthesize chromeTractRef=_chromeTractRef - In the implementation block
@property (nonatomic,readonly) RefTypeHolder<TSCERangeRef chromeRangeRef; 
@property (nonatomic,readonly) RefTypeHolder<TSCERangeRef baseRangeRef; 
@property (nonatomic,readonly) TSKUIDStruct tableUID; 
@property (nonatomic,retain) TSTTableInfo * tableInfo;                                 //@synthesize tableInfo=_tableInfo - In the implementation block
@property (nonatomic,retain) TSTTableModel * tableModel;                               //@synthesize tableModel=_tableModel - In the implementation block
-(TSTTableModel *)tableModel;
-(void)setTableModel:(TSTTableModel *)arg1 ;
-(TSTTableInfo *)tableInfo;
-(void)setTableInfo:(TSTTableInfo *)arg1 ;
-(TSKUIDStruct)tableUID;
-(RefTypeHolder<TSCERangeRef)baseRangeRef;
-(TSCECellTractRef *)baseTractRef;
-(TSCECellTractRef *)chromeTractRef;
-(RefTypeHolder<TSCERangeRef)chromeRangeRef;
-(id)initWithChromeTractRef:(id)arg1 calcEngine:(id)arg2 ;
-(id)initWithBaseTractRef:(id)arg1 calcEngine:(id)arg2 ;
-(void)setBaseTractRef:(TSCECellTractRef *)arg1 ;
-(void)setChromeTractRef:(TSCECellTractRef *)arg1 ;
@end

