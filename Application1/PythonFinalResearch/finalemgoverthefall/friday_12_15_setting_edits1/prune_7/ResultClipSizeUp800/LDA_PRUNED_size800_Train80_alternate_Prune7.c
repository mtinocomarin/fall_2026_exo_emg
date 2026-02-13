// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.13%
// test_accuracy: 71.25%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 13:14:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.654991, 0.655013,
    0.175826, -0.175858,
    0.659248, -0.659258,
    0.342463, -0.342451,
    -0.485258, 0.485128,
    0.164341, -0.164198,
    0.022292, -0.022295,
    0.173359, -0.173361,
    0.201656, -0.201468,
    -0.312917, 0.312634,
    -0.321011, 0.321089,
    0.371484, -0.371444,
};

float Cg_init[2] = {
    -0.295118, -0.295103
};

float xstd_init[12] = {
    0.004041, 0.001740, 0.340451, 0.121608, 0.001038, 0.000185, 0.047744, 0.129164, 0.000652, 0.000161, 0.047459, 0.137632
};

float xmean_init[12] = {
    0.010132, -0.005820, 0.429689, 1.037440, 0.003370, -0.007766, 0.011378, 0.616533, 0.003520, -0.007733, 0.014489, 0.700000
};

