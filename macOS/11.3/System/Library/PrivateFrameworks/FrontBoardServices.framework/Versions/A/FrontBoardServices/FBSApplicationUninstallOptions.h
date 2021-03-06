/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSApplicationUninstallOptions : NSObject {

	char _userInitiated;
	char _showsArchiveOption;

}

@property (assign,getter=isUserInitiated,nonatomic) char userInitiated;              //@synthesize userInitiated=_userInitiated - In the implementation block
@property (assign,nonatomic) char showsArchiveOption;                                //@synthesize showsArchiveOption=_showsArchiveOption - In the implementation block
+(id)userInitiated;
-(char)isUserInitiated;
-(void)setUserInitiated:(char)arg1 ;
-(char)showsArchiveOption;
-(void)setShowsArchiveOption:(char)arg1 ;
@end

