// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.00%
// test_accuracy: 60.42%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-17 13:44:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.658345, 0.658361,
    -0.027414, 0.027369,
    0.229144, -0.229135,
    0.233874, -0.233852,
    -0.831661, 0.831637,
    0.011567, -0.011543,
    0.353852, -0.353859,
    -0.071296, 0.071292,
    -0.850974, 0.850961,
    0.210197, -0.210146,
    -0.251514, 0.251494,
    0.686167, -0.686191,
};

float Cg_init[2] = {
    -0.393768, -0.393763
};

float xstd_init[12] = {
    0.001045, 0.000079, 0.009957, 0.083084, 0.002321, 0.000630, 0.073024, 0.154729, 0.000918, 0.000117, 0.019540, 0.075672
};

float xmean_init[12] = {
    0.006446, -0.007689, 0.003911, 0.142667, 0.008530, -0.006935, 0.092444, 0.444000, 0.004343, -0.007715, 0.010667, 0.138400
};

