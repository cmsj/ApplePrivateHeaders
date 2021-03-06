/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator, NSMutableArray;

@interface XCTElementSnapshotDescendantsEnumerator : NSEnumerator {

	NSEnumerator* _innerEnumerator;
	NSMutableArray* _unenumeratedDescendantsQueue;

}

@property (retain) NSEnumerator * innerEnumerator;                             //@synthesize innerEnumerator=_innerEnumerator - In the implementation block
@property (retain) NSMutableArray * unenumeratedDescendantsQueue;              //@synthesize unenumeratedDescendantsQueue=_unenumeratedDescendantsQueue - In the implementation block
-(id)nextObject;
-(id)initWithElementSnapshot:(id)arg1 ;
-(NSEnumerator *)innerEnumerator;
-(NSMutableArray *)unenumeratedDescendantsQueue;
-(void)setInnerEnumerator:(NSEnumerator *)arg1 ;
-(void)setUnenumeratedDescendantsQueue:(NSMutableArray *)arg1 ;
@end

