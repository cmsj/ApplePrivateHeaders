/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPKCharactersViewDataSource <NSObject>
@optional
-(long long)numberOfColumns;
-(char)hasSkinToneVariantsAtIndex:(long long)arg1 ofSection:(long long)arg2 hasSelected:(char*)arg3;
-(id)languageOfSection:(long long)arg1;
-(char)isEditableSection:(long long)arg1;
-(id)preferredFontsOfSection:(long long)arg1 fallbackType:(long long*)arg2;
-(id)labelAtRow:(long long)arg1 ofSection:(long long)arg2;
-(id)labelAtColumn:(long long)arg1;
-(char)foundCharacter:(id)arg1 atIndex:(long long*)arg2 ofSection:(long long*)arg3;

@required
-(long long)numberOfSections;
-(long long)numberOfCharactersOfSection:(long long)arg1;
-(id)titleOfSection:(long long)arg1 localized:(char)arg2;
-(char)isValidIndex:(long long)arg1 ofSection:(long long)arg2;
-(id)characterAtIndex:(long long)arg1 ofSection:(long long)arg2 withSpecificFont:(id*)arg3;

@end
