// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 71.62%
// test_accuracy: 55.59%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_12.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_21.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-17 13:46:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.355645, 0.355407,
    0.187312, -0.186744,
    -0.010457, 0.010402,
    -0.053734, 0.053423,
    -0.275719, 0.275748,
    -0.258056, 0.258084,
    -0.193754, 0.193736,
    0.413426, -0.413433,
    -0.518433, 0.518538,
    0.283135, -0.283385,
    0.051907, -0.051820,
    0.093894, -0.093827,
};

float Cg_init[2] = {
    -0.164146, -0.164129
};

float xstd_init[12] = {
    0.001067, 0.000083, 0.013343, 0.080949, 0.003180, 0.000867, 0.092415, 0.187773, 0.000870, 0.000111, 0.019704, 0.076182
};

float xmean_init[12] = {
    0.006595, -0.007682, 0.005370, 0.150756, 0.008460, -0.006875, 0.102426, 0.429428, 0.004348, -0.007715, 0.010801, 0.127461
};

