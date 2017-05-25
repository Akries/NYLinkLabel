//
//  NYLinkLabel.h
//  算高度
//
//  Created by Akries on 16/5/23.
//  Copyright © 2016年 xiyu. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^NYLinkLabelClickItemBlock)(id transmitBody);

@class NYLinkLabelClickItem;

@interface NYLinkLabel : UILabel
/**
 *  添加点击事件, block回调
 *
 *  @param text         需要监听点击的事件文字
 *  @param attributeds  文字的属性
 *  @param transmitBody 需要传入Block的参数
 *  @param clickBlock   回调Block 将传入的body传出来
 */
- (void)addClickText:(NSString *)text attributeds:(NSDictionary *)attributeds transmitBody:(id)transmitBody clickItemBlock:(NYLinkLabelClickItemBlock)clickBlock;
/**
 *  图片点击的事件
 *
 *  @param attachmentName 附件名字
 *  @param transmitBody   需要传入Block的参数
 *  @param clickBlock     回调Block 将传入的body传出来
 */
- (void)addClickTextAttachmentName:(NSString *)attachmentName TransmitBody:(id)transmitBody clickItemBlock:(NYLinkLabelClickItemBlock)clickBlock;

@end

@interface NYLinkLabelClickItem :NSObject
/**
 *  文本
 */
@property(nonatomic, copy)NSString *text;
/**
 *  文本对应的范围
 */
@property(nonatomic, assign)NSRange range;
/**
 *  文本对应的尺寸
 */
@property(nonatomic, assign)CGRect textRect;
/**
 *  文本对应的尺寸集合
 */
@property(nonatomic, strong)NSMutableArray *textRects;
/**
 *  需要传参数
 */
@property(nonatomic, strong)id transmitBody;
/**
 *  点击事件
 */
@property(nonatomic, copy)NYLinkLabelClickItemBlock clickBlock;

// 类工厂方法 返回实例
+ (instancetype)itemWithText:(NSString *)string range:(NSRange)range transmitBody:(id)transmitBody;

// 类工厂方法 返回实例
+ (instancetype)itemWithTransmitBody:(id)transmitBody;

@end

@interface NYTextAttachment : NSTextAttachment

@property(nonatomic, copy)NSString *attachmentName;

@end
