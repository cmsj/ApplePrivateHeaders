/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUICore/CNUIUserActionItem.h>

@protocol CNTUDialRequest;
@interface _CNUIUserActionDialRequestItem : CNUIUserActionItem {

	id<CNTUDialRequest> _dialRequest;

}

@property (nonatomic,readonly) id<CNTUDialRequest> dialRequest;              //@synthesize dialRequest=_dialRequest - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)performActionWithContext:(id)arg1 ;
-(id<CNTUDialRequest>)dialRequest;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
@end

