/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IASUtilities.framework/Versions/A/IASUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IASUtilities/IASUtilities-Structs.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>

@class NSTableView, NSMutableArray, NSString, NSTableColumn;

@interface IASLogDataSource : NSObject <NSTableViewDataSource, NSTableViewDelegate> {

	NSTableView* _logView;
	NSMutableArray* _rootChildren;
	NSMutableArray* _lineNumbers;
	long long _currentLogFilter;
	SCD_Struct_IA0* _buf;
	unsigned long long _lineIndex;
	unsigned long long _longestStrlen;
	unsigned long long _widestStringPx;
	unsigned _last_seen_offset;
	NSString* _searchString;
	NSTableColumn* _msgCol;
	NSTableColumn* _lnCol;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithTableView:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)setSearchString:(id)arg1 ;
-(void)_updateLog;
-(void)_clearLog;
-(void)setLogFilter:(long long)arg1 ;
-(long long)_syncObjectsFromBuffer;
@end

