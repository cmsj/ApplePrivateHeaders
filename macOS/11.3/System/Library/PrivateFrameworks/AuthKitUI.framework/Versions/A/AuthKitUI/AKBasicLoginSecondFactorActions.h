/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AKBasicLoginSecondFactorActions : NSObject <NSCopying> {

	/*^block*/id _regenerateCodeAction;
	/*^block*/id _codeEnteredAction;
	/*^block*/id _ak_cancelAction;

}

@property (nonatomic,copy) id regenerateCodeAction;              //@synthesize regenerateCodeAction=_regenerateCodeAction - In the implementation block
@property (nonatomic,copy) id codeEnteredAction;                 //@synthesize codeEnteredAction=_codeEnteredAction - In the implementation block
@property (nonatomic,copy) id ak_cancelAction;                   //@synthesize ak_cancelAction=_ak_cancelAction - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)ak_cancelAction;
-(void)setAk_cancelAction:(id)arg1 ;
-(id)regenerateCodeAction;
-(void)setRegenerateCodeAction:(id)arg1 ;
-(id)codeEnteredAction;
-(void)setCodeEnteredAction:(id)arg1 ;
@end

