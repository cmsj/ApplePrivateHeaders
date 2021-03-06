/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Versions/A/Coherence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Coherence/Coherence-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringIDTracker.h>

@class NSString;

@interface TTMergeableStringSelection : NSObject <TTMergeableStringIDTracker> {

	vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID>>>* _selectionRanges;
	unsigned long long _selectionAffinity;

}

@property (assign,nonatomic) unsigned long long selectionAffinity;              //@synthesize selectionAffinity=_selectionAffinity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)selectionAffinity;
-(id)serialize;
-(id)initWithArchive:(const Selection*)arg1 ;
-(void)saveToArchive:(Selection*)arg1 ;
-(void)setSelectionAffinity:(unsigned long long)arg1 ;
-(vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID>>>*)selectionRanges;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(char)hasTopoIDsThatCanChange;
@end

