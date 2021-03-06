/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNObservable;

@interface CNAutocompleteCalendarQueryAssembler : NSObject {

	CNObservable* _cachedObservable;
	CNObservable* _uncachedObservable;
	CNObservable* _rawCachedObservable;
	CNObservable* _rawUncachedObservable;

}

@property (readonly) CNObservable * rawCachedObservable;                //@synthesize rawCachedObservable=_rawCachedObservable - In the implementation block
@property (readonly) CNObservable * rawUncachedObservable;              //@synthesize rawUncachedObservable=_rawUncachedObservable - In the implementation block
@property (readonly) CNObservable * cachedObservable;                   //@synthesize cachedObservable=_cachedObservable - In the implementation block
@property (readonly) CNObservable * uncachedObservable;                 //@synthesize uncachedObservable=_uncachedObservable - In the implementation block
-(id)description;
-(CNObservable *)rawCachedObservable;
-(CNObservable *)rawUncachedObservable;
-(id)initWithRawCachedObservable:(id)arg1 rawUncachedObservable:(id)arg2 ;
-(void)assemble;
-(CNObservable *)cachedObservable;
-(CNObservable *)uncachedObservable;
@end

