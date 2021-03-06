/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSFullScreenStorage.h>

@class NSString;

@interface _NSWindowFullScreenStorage : _NSFullScreenStorage {

	CGRect _savedFrame;
	NSString* _stringWithSavedFrame;
	CGRect _savedScreenFrame;
	long long _savedScreenNumber;
	char _toolbarWasHidden;
	CGSize _userTilePreferredSize;
	char _windowJoinedTileOnCreation;

}

@property (assign) CGRect savedFrame;                            //@synthesize savedFrame=_savedFrame - In the implementation block
@property (copy) NSString * stringWithSavedFrame;                //@synthesize stringWithSavedFrame=_stringWithSavedFrame - In the implementation block
@property (assign) char toolbarWasHidden;                        //@synthesize toolbarWasHidden=_toolbarWasHidden - In the implementation block
@property (assign) CGRect savedScreenFrame;                      //@synthesize savedScreenFrame=_savedScreenFrame - In the implementation block
@property (assign) long long savedScreenNumber;                  //@synthesize savedScreenNumber=_savedScreenNumber - In the implementation block
@property (assign) CGSize userTilePreferredSize;                 //@synthesize userTilePreferredSize=_userTilePreferredSize - In the implementation block
@property (assign) char windowJoinedTileOnCreation;              //@synthesize windowJoinedTileOnCreation=_windowJoinedTileOnCreation - In the implementation block
-(void)dealloc;
-(CGRect)savedFrame;
-(void)setSavedFrame:(CGRect)arg1 ;
-(NSString *)stringWithSavedFrame;
-(void)setStringWithSavedFrame:(NSString *)arg1 ;
-(char)toolbarWasHidden;
-(void)setToolbarWasHidden:(char)arg1 ;
-(CGRect)savedScreenFrame;
-(void)setSavedScreenFrame:(CGRect)arg1 ;
-(long long)savedScreenNumber;
-(void)setSavedScreenNumber:(long long)arg1 ;
-(CGSize)userTilePreferredSize;
-(void)setUserTilePreferredSize:(CGSize)arg1 ;
-(char)windowJoinedTileOnCreation;
-(void)setWindowJoinedTileOnCreation:(char)arg1 ;
@end

