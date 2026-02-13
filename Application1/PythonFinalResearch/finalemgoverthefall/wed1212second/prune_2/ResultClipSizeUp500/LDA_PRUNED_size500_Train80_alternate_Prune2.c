// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_2\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.15%
// test_accuracy: 71.53%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 16:59:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.053872, -0.054005,
    -0.203330, 0.203652,
    0.045515, -0.045563,
    -0.019229, 0.019069,
    1.459253, -1.459257,
    -1.225672, 1.225635,
    -0.205031, 0.205054,
    0.124094, -0.124079,
    -0.451541, 0.451517,
    -0.577933, 0.577960,
    0.288640, -0.288652,
    1.123994, -1.124012,
};

float Cg_init[2] = {
    -0.401250, -0.401263
};

float xstd_init[12] = {
    0.000851, 0.000075, 0.007252, 0.063633, 0.000733, 0.000126, 0.014780, 0.053261, 0.003472, 0.001042, 0.115867, 0.205899
};

float xmean_init[12] = {
    0.005470, -0.007762, 0.001679, 0.089260, 0.002385, -0.007850, 0.004790, 0.046963, 0.009091, -0.006612, 0.132840, 0.472815
};

