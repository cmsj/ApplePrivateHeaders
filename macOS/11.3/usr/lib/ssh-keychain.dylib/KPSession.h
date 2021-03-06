/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/ssh-keychain.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface KPSession : NSObject {

	NSMutableArray* _findResults;
	long long _slotIndex;
	long long _findIndex;
	long long _signIndex;

}

@property (retain) NSMutableArray * findResults;              //@synthesize findResults=_findResults - In the implementation block
@property (assign) long long slotIndex;                       //@synthesize slotIndex=_slotIndex - In the implementation block
@property (assign) long long findIndex;                       //@synthesize findIndex=_findIndex - In the implementation block
@property (assign) long long signIndex;                       //@synthesize signIndex=_signIndex - In the implementation block
-(long long)slotIndex;
-(NSMutableArray *)findResults;
-(void)setFindResults:(NSMutableArray *)arg1 ;
-(void)setSlotIndex:(long long)arg1 ;
-(long long)findIndex;
-(void)setFindIndex:(long long)arg1 ;
-(long long)signIndex;
-(void)setSignIndex:(long long)arg1 ;
@end

