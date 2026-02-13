// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.18%
// test_accuracy: 52.50%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_25.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 13:46:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.542693, 0.542747,
    0.396081, -0.396189,
    -0.070433, 0.070450,
    -0.250152, 0.250198,
    -0.349382, 0.349500,
    -0.266755, 0.266657,
    -0.022090, 0.022077,
    0.268870, -0.268860,
    -0.550923, 0.551028,
    0.317631, -0.317815,
    0.066684, -0.066650,
    0.073340, -0.073286,
};

float Cg_init[2] = {
    -0.202198, -0.202225
};

float xstd_init[12] = {
    0.001085, 0.000082, 0.012183, 0.081498, 0.003257, 0.000887, 0.093493, 0.187600, 0.000872, 0.000117, 0.019572, 0.076579
};

float xmean_init[12] = {
    0.006544, -0.007684, 0.004808, 0.146849, 0.008446, -0.006878, 0.101414, 0.427879, 0.004420, -0.007707, 0.010788, 0.132122
};

