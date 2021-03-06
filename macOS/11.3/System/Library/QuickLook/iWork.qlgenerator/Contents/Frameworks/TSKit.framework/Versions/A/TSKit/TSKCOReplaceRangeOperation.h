/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKit-Structs.h>
#import <TSKit/TSKCOReplaceOperation.h>
#import <TSKit/TSKCORangeOperation.h>

@interface TSKCOReplaceRangeOperation : TSKCOReplaceOperation <TSKCORangeOperation> {

	vector<_NSRange, std::__1::allocator<_NSRange>>* _rangeVector;
	char _preserveLowerPriorityLocation;
	unsigned long long _insertLength;

}

@property (nonatomic,readonly) unsigned long long insertLength;                 //@synthesize insertLength=_insertLength - In the implementation block
@property (nonatomic,readonly) char preserveLowerPriorityLocation;              //@synthesize preserveLowerPriorityLocation=_preserveLowerPriorityLocation - In the implementation block
@property (nonatomic,readonly) const vector<_NSRange* rangeVector; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)toString;
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Operation*)arg2 ;
-(id)operationWithNewNoop:(char)arg1 ;
-(shared_ptr<TSKCO::AbstractOperation>*)newTransformableOperation;
-(const vector<_NSRange*)rangeVector;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>*)arg1 rangeVector:(const vector<_NSRange, std::__1::allocator<_NSRange>>*)arg2 insertLength:(unsigned long long)arg3 preserveLowerPriorityLocation:(char)arg4 noop:(char)arg5 ;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>*)arg1 rangeVector:(const vector<_NSRange, std::__1::allocator<_NSRange>>*)arg2 insertLength:(unsigned long long)arg3 noop:(char)arg4 ;
-(unsigned long long)insertLength;
-(char)preserveLowerPriorityLocation;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>*)arg1 rangeVector:(const vector<_NSRange, std::__1::allocator<_NSRange>>*)arg2 insertLength:(unsigned long long)arg3 ;
@end

