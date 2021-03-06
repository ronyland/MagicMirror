//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSToolbarItem.h"

@class NSImage, NSMenu;

@interface MSPopUpToolbarItem : NSToolbarItem
{
    NSImage *_smallImage;
    NSImage *_normalImage;
}


- (SEL)action;
@property(nonatomic) __weak id <MSPopToolbarItemActionObject> actionObject; // @dynamic actionObject;
- (id)image;
- (id)initWithItemIdentifier:(id)arg1 size:(unsigned long long)arg2;
@property(retain, nonatomic) NSMenu *menu; // @dynamic menu;
- (id)menuButtonWithSize:(unsigned long long)arg1;
@property(retain, nonatomic) NSImage *normalImage; // @synthesize normalImage=_normalImage;
- (id)popupCell;
- (void)setAction:(SEL)arg1;
- (void)setImage:(id)arg1;
@property(retain, nonatomic) NSImage *smallImage; // @synthesize smallImage=_smallImage;
- (void)setTarget:(id)arg1;
- (void)setToolTip:(id)arg1;
- (id)target;
- (id)toolTip;
- (void)validate;

@end

