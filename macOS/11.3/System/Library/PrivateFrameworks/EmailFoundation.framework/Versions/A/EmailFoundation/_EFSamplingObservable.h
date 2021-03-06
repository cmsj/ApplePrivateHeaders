/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EFObservable.h>

@protocol EFObservable;
@interface _EFSamplingObservable : EFObservable {

	id<EFObservable> _observable;
	id<EFObservable> _sampler;

}
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 sampler:(id)arg2 ;
@end

