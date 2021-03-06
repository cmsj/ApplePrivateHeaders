/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RTInferredMapItemDeduper : NSObject {

	/*^block*/id _deduperFunction;

}

@property (nonatomic,copy,readonly) id deduperFunction;              //@synthesize deduperFunction=_deduperFunction - In the implementation block
-(id)init;
-(id)initWithDeduperFunction:(/*^block*/id)arg1 ;
-(id)dedupeDoubleArrayOfInferredMapItems:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(char)inferredMapItem:(id)arg1 dedupesToInferredMapItem:(id)arg2 error:(id*)arg3 ;
-(id)dedupeInferredMapItems:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(id)ingestInferredMapItem:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(id)ingestInferredMapItems:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(id)dedupeInferredMapItems:(id)arg1 error:(id*)arg2 ;
-(id)dedupeDoubleArrayOfInferredMapItems:(id)arg1 error:(id*)arg2 ;
-(id)deduperFunction;
@end

