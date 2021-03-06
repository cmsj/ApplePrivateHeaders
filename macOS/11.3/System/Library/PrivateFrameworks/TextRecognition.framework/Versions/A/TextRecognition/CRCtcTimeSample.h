/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/Versions/A/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextRecognition/TextRecognition-Structs.h>
@interface CRCtcTimeSample : NSObject {

	CRCtcCandidate _blank;
	CRCTCPriorityQueue=priority_queue<CRCtcCandidate, std::__1::vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate>>, CRCTCPriorityQueue::QueueComparison>=vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate>>=CRCtcCandidate}CRCtcCandidate}compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate>>=CRCtcCandidate}}}QueueComparison}Bvector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate>>=CRCtcCandidate}CRCtcCandidate}compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate>>=CRCtcCandidate}}}}Ref _sample;

}

@property (assign) CRCTCPriorityQueue* sample;              //@synthesize sample=_sample - In the implementation block
@property (assign) CRCtcCandidate blank;                    //@synthesize blank=_blank - In the implementation block
-(void)dealloc;
-(id)init;
-(const vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate>>*)candidates;
-(CRCTCPriorityQueue*)sample;
-(void)addCandidate:(CRCtcCandidate)arg1 ;
-(void)setSample:(CRCTCPriorityQueue*)arg1 ;
-(void)trimCandidates;
-(CRCtcCandidate)blank;
-(void)setBlank:(CRCtcCandidate)arg1 ;
-(CRCtcCandidate)topCandidate;
@end

