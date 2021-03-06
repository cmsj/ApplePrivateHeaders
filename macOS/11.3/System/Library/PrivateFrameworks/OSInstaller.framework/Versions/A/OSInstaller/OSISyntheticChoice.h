/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSInstaller.framework/Versions/A/OSInstaller
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DistributionKit/PKDistributionChoiceItem.h>

@class NSString;

@interface OSISyntheticChoice : PKDistributionChoiceItem {

	char _enabled;
	char _canBeDisabled;
	NSString* _identifier;
	long long _cellState;

}
-(long long)state;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(id)identifier;
-(void)setState:(long long)arg1 ;
-(char)visible;
-(char)canBeDisabled;
-(id)visibleChildren;
-(id)initWithChoiceItems:(id)arg1 title:(id)arg2 identifier:(id)arg3 canBeDisabled:(char)arg4 ;
-(id)packageReferencesToInstall;
-(id)choice;
-(id)packageReferencesToInstallIgnoringChildren;
-(char)startSelected;
@end

