/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactLikenessMutatorFactory.h>

@class PRPersonaStore, CNContactStore, CNUIMeContactMonitor, NSString;

@interface CNContactLikenessDefaultMutatorFactory : NSObject <CNContactLikenessMutatorFactory> {

	PRPersonaStore* _personaStore;
	CNContactStore* _contactStore;
	CNUIMeContactMonitor* _meMonitor;

}

@property (nonatomic,retain) PRPersonaStore * personaStore;                 //@synthesize personaStore=_personaStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                 //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNUIMeContactMonitor * meMonitor;              //@synthesize meMonitor=_meMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNUIMeContactMonitor *)meMonitor;
-(void)setMeMonitor:(CNUIMeContactMonitor *)arg1 ;
-(PRPersonaStore *)personaStore;
-(id)likenessMutatorForContact:(id)arg1 likeness:(id)arg2 mutationType:(long long)arg3 ;
-(void)setPersonaStore:(PRPersonaStore *)arg1 ;
-(id)initWithContactStore:(id)arg1 personaStore:(id)arg2 meMonitor:(id)arg3 ;
@end

