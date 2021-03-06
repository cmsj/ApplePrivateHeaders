/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICChecklistInfo : NSObject {

	unsigned long long _numberOfItems;
	unsigned long long _numberOfCheckedItems;
	unsigned long long _numberOfUncheckedItems;

}

@property (assign,nonatomic) unsigned long long numberOfItems;                       //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCheckedItems;                //@synthesize numberOfCheckedItems=_numberOfCheckedItems - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfUncheckedItems;              //@synthesize numberOfUncheckedItems=_numberOfUncheckedItems - In the implementation block
-(unsigned long long)numberOfItems;
-(void)setNumberOfItems:(unsigned long long)arg1 ;
-(unsigned long long)numberOfCheckedItems;
-(void)setNumberOfCheckedItems:(unsigned long long)arg1 ;
-(unsigned long long)numberOfUncheckedItems;
-(void)setNumberOfUncheckedItems:(unsigned long long)arg1 ;
@end

